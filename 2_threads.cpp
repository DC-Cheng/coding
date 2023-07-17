#pragma region multi-threading
uint32_t g_x = 0;
uint32_t g_last = 10;
void task1()
{
	g_x = 1;
}
void task2()
{
	g_x = 2;
}
void task3()
{
	g_x = 3;
}
void task4()
{
	g_x = 4;
}
void task5()
{
	g_x = 5;
}
void task6()
{
	g_x = 6;
}
void task7()
{
	g_x = 7;
}
void task8()
{
	g_x = 8;
}
void task9()
{
	g_x = 9;
}
void task10()
{
	g_x = 10;
}
int main() 
{
	//write multi thread, create race condition
	for (int i = 0; i < 100000; i++)
	{
		//thread t1(task1, g_x = 1);
		std::thread t1(task1);
		std::thread t2(task2);
		std::thread t3(task3);
		std::thread t4(task4);
		std::thread t5(task5);
		std::thread t6(task6);
		std::thread t7(task7);
		std::thread t8(task8);
		std::thread t9(task9);
		std::thread t10(task10);

		t1.join();
		t2.join();
		t3.join();
		t4.join();
		t5.join();
		t6.join();
		t7.join();
		t8.join();
		t9.join();
		t10.join();
		std::cout << g_x << ",";
		if (g_x != 10)
			std::cout << "error\n";
	}
	std::cout << std::endl;
	system("Pause");
	return 0;
}
#pragma endregion multi-threading
