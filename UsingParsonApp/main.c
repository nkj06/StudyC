/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, parson ���̺귯�� ���
  --------------------------------------------------------------------------------
  first created - 2020.02.12
  writer - Nam Kyung Jin
*/

#include <stdio.h>
#include <stdlib.h>
#include "parson.h"

int read_json(void) {// �����Լ�
    JSON_Value* rootValue;
    JSON_Object* rootObject;

    rootValue = json_parse_file("package.json"); // Json ���� �ε�, �ʱ�ȭ
    rootObject = json_value_get_object(rootValue); //JSON_Value���� JSON_Object�� ȹ��

    // ���ó�� �κ� �ڵ�
    printf("name : %s\n", json_object_get_string(rootObject, "name"));
    printf("version: %s\n", json_object_get_string(rootObject, "version"));
    printf("repo: %s\n", json_object_get_string(rootObject, "repo"));
    printf("description: %s\n", json_object_get_string(rootObject, "description"));

    // ��ü���� Ű�� �ش��ϴ� �迭�� ������
    JSON_Array* array = json_object_get_array(rootObject, "keywords");
    printf("keywords : \n");
    for (int i = 0; i < json_array_get_count(array); i++) { // �迭 ��� ���� �ݺ�
        printf(" %s\n", json_array_get_string(array, i)); // �迭�� �ε��� ����, ���ڿ� ����
    }

    printf("license: %s\n", json_object_get_string(rootObject, "license"));
    printf("temp : %.1lf\n", (double)json_object_get_number(rootObject, "temp"));

    array = json_object_get_array(rootObject, "src");
    printf("src : \n");
    for (int i = 0; i < json_array_get_count(array); i++) { // �迭 ��� ���� �ݺ�
        printf(" %s\n", json_array_get_string(array, i)); // �迭�� �ε��� ����, ���ڿ� ����
    }

    json_value_free(rootValue); // JSON_Value�� �Ҵ�� ���� �޸� ����

    system("pause");
    return EXIT_SUCCESS;
}

void write_json(void) {
    JSON_Value* rootValue;
    JSON_Object* rootObject;

    /* �ʱ�ȭ */
    rootValue = json_value_init_object(); // JSON_Value ���� �� �ʱ�ȭ
    rootObject = json_value_get_object(rootValue); // JSON_Value���� JSON_Object�� ����

    /* ��� */
    // ��ü�� Ű�� �߰��ϰ� ���ڿ� ����
    json_object_set_string(rootObject, "Title", "Interstellar");

    // ��ü�� Ű�� �߰��ϰ� ���� ����
    json_object_set_number(rootObject, "Year", 2014);
    json_object_set_number(rootObject, "Runtime", 169);

    // ��ü�� Ű�� �߰��ϰ� ���ڿ� ����
    json_object_set_string(rootObject, "Genre", "Sci-Fi");
    json_object_set_string(rootObject, "Director", "Christopher Nolan");

    // ��ü�� Ű�� �߰��ϰ� �迭 ����
    json_object_set_value(rootObject, "Actors", json_value_init_array());

    // ��ü���� �迭 �����͸� ������
    JSON_Array* actors = json_object_get_array(rootObject, "Actors");

    // �迭�� ���ڿ� ��� �߰�
    json_array_append_string(actors, "Matthew McConaughey");
    json_array_append_string(actors, "Anne Hathaway");
    json_array_append_string(actors, "Michael Caine");
    json_array_append_string(actors, "Jessica Chastain");
    json_array_append_string(actors, "Casey Affleck");

    // ��ü�� Ű�� �߰��ϰ� ���� ����
    json_object_set_number(rootObject, "imdbRating", 8.6);

    // ��ü�� Ű�� �߰��ϰ� �� �� ����
    json_object_set_boolean(rootObject, "KoreaRelease", 1);

    // JSON_Value�� ����� �б� ���� ���ڿ�(pretty)�� ���� �� ���Ͽ� ����
    json_serialize_to_file_pretty(rootValue, "saved.json");
    /* ���� */
    json_value_free(rootValue); // JSON_Value�� �Ҵ�� ���� �޸� ����

}

int main(void)
{
    write_json();

    system("pause");
    return EXIT_SUCCESS;
}