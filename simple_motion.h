//机械手类
class CRobotic
{
public:
	float x;
	float y;
	float vx;
	float vy;
	list CommandList;
	
	void Init();
	void readCommand();
	void Trajectory_Generator();
	void Display();

private:
	Scalar color;
	float m;
	int diameter;
};

void CRobotic::Init()
{
	//初始化参数
}

void CRobotic::readCommand()
{
	//接受并解析命令，得到目标击球点和目标击球速度
}

void CRobotic::Trajectory_Generator()
{
	//根据目标击球点和目标击球速度，生成平滑轨迹。轨迹插补可用在这里
}

void CRobotic::Display()
{
	//根据击球器的位置、大小、颜色，实时显示画面
}
