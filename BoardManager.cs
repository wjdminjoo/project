using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using Random = UnityEngine.Random;

public class BoardManager : MonoBehaviour {


    public int columns = 10;
    public int rows = 10;
    public Count wallCount = new Count(5, 9);
    public Count ItemCount = new Count(1, 5);
    public GameObject[] floorTiles;
    public GameObject[] wallTiles;
    public GameObject[] ItemTiles;
    public GameObject[] EnemyTiles;
    public GameObject[] outerWallTiles;
    public GameObject exit;


    [Serializable]
    public class Count{
        public int minNum;
        public int maxNum;

        public Count(int min, int max){
            minNum = min;
            maxNum = max;

        }
    }


    private Transform boardHolder;
    private List<Vector3> gridPositions = new List<Vector3>();


    void InitalizeList(){
        gridPositions.Clear();
        for (int x = 1; x< columns - 1; x++){
            for (int y = 1; y < rows; y++){
                gridPositions.Add(new Vector3(x, y, 0.0f));
            }
        }
    }


    void BoardSetup(){ // 바깥 벽설치
        boardHolder = new GameObject("Board").transform;

        for (int x = -1; x < columns + 1; x++)
        {
            for (int y = -1; y < rows; y++)
            {
                GameObject toInstantiate = floorTiles[Random.Range(0, floorTiles.Length)];
                if (x == -1 || x == columns || y == -1 || y == rows)
                    toInstantiate = outerWallTiles[Random.Range(0, outerWallTiles.Length)];

                GameObject instance = Instantiate(toInstantiate, new Vector3(x, y, 0.0f), Quaternion.identity) as GameObject;

                instance.transform.SetParent(boardHolder);

            }
        }
    }

    Vector3 RandomPosition(){
        int randomIndex = Random.Range(0, gridPositions.Count);
        Vector3 randomPosition = gridPositions[randomIndex];
        gridPositions.RemoveAt(randomIndex);
        return randomPosition;
    }

    void LayOutObjectAtRandom(GameObject[] tileArray, int min, int max){
        int objectCount = Random.Range(min, max + 1);

        for (int i = 0; i < objectCount; i++) {
            Vector3 randomPosition = RandomPosition();
            GameObject tileChoice = tileArray[Random.Range(0, tileArray.Length)];
            Instantiate(tileChoice, randomPosition, Quaternion.identity);//회전성 0에 가깝게 해줌.
        }
    }

    public void SetupScene(int level){
        BoardSetup();
        InitalizeList();
        LayOutObjectAtRandom(wallTiles, wallCount.minNum, wallCount.maxNum);
        LayOutObjectAtRandom(ItemTiles, ItemCount.minNum, ItemCount.maxNum);
        int enemyCount = (int)Mathf.Log(level, 4.0f);
        LayOutObjectAtRandom(EnemyTiles, enemyCount, enemyCount);
        Instantiate(exit, new Vector3(Random.Range(0f, 0f), Random.Range(0f, 0f), 0f), Quaternion.identity);
    }

}
