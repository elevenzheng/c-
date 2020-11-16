#include <iostream>
using namespace std;

//抽象类
class CPU {
public:
	virtual void calculate() = 0;
};

class Memory {
public:
	virtual void storage() = 0;
};

//具体类型
class AMDCPU :public CPU {
public:
	void calculate() {
		cout << "AMDCPU work" << endl;
	}
};
class IntelCPU :public CPU {
public:
	void calculate() {
		cout << "IntelCPU work" << endl;
	}
};

class AMDMem :public Memory {
public:
	void storage() {
		cout << "AMDMem work" << endl;
	}
};
class IntelMem :public Memory {
public:
	void storage() {
		cout << "IntelMem work" << endl;
	}
};

//组装结果
class computer {
private:
	CPU* m_cpu;
	Memory* m_mem;
public:
	computer(CPU* cpu, Memory* mem) {
		m_cpu = cpu;
		m_mem = mem; //多态
	}
	void work() {
		m_cpu->calculate();
		m_mem->storage();  //通过父类指针或引用调用子类对象
	}
	~computer()
	{
		cout << "delete" << endl;
		delete m_cpu;
		delete m_mem;
	}
};

void test() {
	computer c1(new AMDCPU, new IntelMem);
	c1.work();

	computer c2(new IntelCPU, new IntelMem);
	c2.work();
}

int main() {
	test();
	system("pause");
	return 0;
}