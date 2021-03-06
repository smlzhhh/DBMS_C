#ifndef DBMSMAIN_H
#define DBMSMAIN_H

#include <QDialog>

namespace Ui {
class dbmsmain;
}

class dbmsmain : public QDialog
{
    Q_OBJECT

public:
    explicit dbmsmain(QWidget *parent = 0);
    ~dbmsmain();

private slots:
	void getindex();		//接收初始页面信号
	void on_info_clicked();
	void on_grade_clicked();
	void on_choose_clicked();
	void on_config_clicked();
	void get_info();		//接收学生信息查询返回信号
	void get_grade();		//接收学生课程查询返回信号
	void get_choose();		//接收选课返回信号
	void get_config();

signals:
	void goto_stuinfo();	//跳转学生信息查询信号
	void goto_stuclass();	//跳转学生课程查询信号
	void goto_stuchoose();	//跳转选课系统信号
	void goto_config();		//跳转管理系统信号

private:
    Ui::dbmsmain *ui;
};

#endif // DBMSMAIN_H
