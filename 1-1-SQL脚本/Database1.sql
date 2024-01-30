
create database stum
create table Student(
	Sno VARCHAR(20) primary key,
	Sname VARCHAR(20) not null,
	sex VARCHAR(20) not null,
	class VARCHAR(20) not null,
	live VARCHAR(20) not null
)

create table Org(
	Cno VARCHAR(20) primary key,
	class VARCHAR(20) not null,
	college VARCHAR(30) not null
)
create table Course(
	Cono VARCHAR(20) primary key,
	Coname VARCHAR(20) not null,
	unit int not null,
	teacher VARCHAR(20) not null,
	place VARCHAR(20)
)
create table Exam(
	Sno VARCHAR(20) references Student(Sno),
	Cono VARCHAR(20) not null references Course(Cono),
	score int 
)
create table statu(
	Sno VARCHAR(20) references Student(Sno),
	deg VARCHAR(20) not null ,
	ste VARCHAR(10) not null
)

delete from Org
delete from Exam
delete from Course
delete from statu
delete from Student

INSERT INTO student (Sno,Sname,sex,class,live) VALUES ('1','小明','男','计科2201','金沙港')
INSERT INTO student (Sno,Sname,sex,class,live) VALUES ('2','小华','男','计科2201','钱江湾')
INSERT INTO student (Sno,Sname,sex,class,live) VALUES ('3','小文','男','计科2201','金沙港')
INSERT INTO student (Sno,Sname,sex,class,live) VALUES ('4','小刘','男','计科2202','金沙港')
INSERT INTO student (Sno,Sname,sex,class,live) VALUES ('5','小凡','男','计科2202','钱江湾')
INSERT INTO student (Sno,Sname,sex,class,live) VALUES ('6','小王','男','计科2202','金沙港')
INSERT INTO student (Sno,Sname,sex,class,live) VALUES ('7','小李','男','计科2202','金沙港')
INSERT INTO student (Sno,Sname,sex,class,live) VALUES ('8','小赵','男','计科2202','钱江湾')
INSERT INTO student (Sno,Sname,sex,class,live) VALUES ('9','小庄','男','计科2203','金沙港')
INSERT INTO student (Sno,Sname,sex,class,live) VALUES ('10','小美','女','计科2203','金沙港')

INSERT INTO Org (Cno,class,college) VALUES ('1','计科2201','计算机科学与技术学院')
INSERT INTO Org (Cno,class,college) VALUES ('2','计科2202','计算机科学与技术学院')
INSERT INTO Org (Cno,class,college) VALUES ('3','计科2203','计算机科学与技术学院')

INSERT INTO Course (Cono,Coname,unit,teacher,place) VALUES ('1','数据库原理',2,'赵绪然','A322')
INSERT INTO Course (Cono,Coname,unit,teacher,place) VALUES ('2','数字逻辑',2,'傅均','A423')
INSERT INTO Course (Cono,Coname,unit,teacher,place) VALUES ('3','面向对象程序设计',3,'蒋海华','A323')
INSERT INTO Course (Cono,Coname,unit,teacher,place) VALUES ('4','概率论与数理统计II',3,'郝晓珍','C408')
INSERT INTO Course (Cono,Coname,unit,teacher,place) VALUES ('5','初级乒乓球',1,'魏强','体育中心一楼')
INSERT INTO Course (Cono,Coname,unit,teacher,place) VALUES ('6','中国近现代史纲要',3,'郭墨寒','C108')

INSERT INTO Exam (Sno,Cono,score) VALUES ('1','1',78)
INSERT INTO Exam (Sno,Cono,score) VALUES ('1','2',85)
INSERT INTO Exam (Sno,Cono,score) VALUES ('1','3',74)
INSERT INTO Exam (Sno,Cono,score) VALUES ('2','1',89)
INSERT INTO Exam (Sno,Cono,score) VALUES ('2','4',91)
INSERT INTO Exam (Sno,Cono,score) VALUES ('2','5',92)
INSERT INTO Exam (Sno,Cono,score) VALUES ('3','2',95)
INSERT INTO Exam (Sno,Cono,score) VALUES ('3','5',97)
INSERT INTO Exam (Sno,Cono,score) VALUES ('3','6',82)
INSERT INTO Exam (Sno,Cono,score) VALUES ('4','1',81)
INSERT INTO Exam (Sno,Cono,score) VALUES ('4','4',65)
INSERT INTO Exam (Sno,Cono,score) VALUES ('4','5',73)
INSERT INTO Exam (Sno,Cono,score) VALUES ('5','2',72)
INSERT INTO Exam (Sno,Cono,score) VALUES ('5','3',82)
INSERT INTO Exam (Sno,Cono,score) VALUES ('5','6',94)
INSERT INTO Exam (Sno,Cono,score) VALUES ('6','1',99)
INSERT INTO Exam (Sno,Cono,score) VALUES ('6','2',98)
INSERT INTO Exam (Sno,Cono,score) VALUES ('6','3',87)
INSERT INTO Exam (Sno,Cono,score) VALUES ('7','4',88)
INSERT INTO Exam (Sno,Cono,score) VALUES ('7','5',90)
INSERT INTO Exam (Sno,Cono,score) VALUES ('8','3',80)
INSERT INTO Exam (Sno,Cono,score) VALUES ('8','4',74)
INSERT INTO Exam (Sno,Cono,score) VALUES ('8','5',75)
INSERT INTO Exam (Sno,Cono,score) VALUES ('8','6',66)
INSERT INTO Exam (Sno,Cono,score) VALUES ('9','1',62)
INSERT INTO Exam (Sno,Cono,score) VALUES ('10','1',60)
INSERT INTO Exam (Sno,Cono,score) VALUES ('10','2',100)

INSERT INTO statu (Sno,deg,ste) VALUES ('1','本科','在读')
INSERT INTO statu (Sno,deg,ste) VALUES ('2','研究生','在读')
INSERT INTO statu (Sno,deg,ste) VALUES ('3','本科','留级')
INSERT INTO statu (Sno,deg,ste) VALUES ('4','本科','在读')
INSERT INTO statu (Sno,deg,ste) VALUES ('5','研究生','在读')
INSERT INTO statu (Sno,deg,ste) VALUES ('6','本科','毕业')
INSERT INTO statu (Sno,deg,ste) VALUES ('7','本科','在读')
INSERT INTO statu (Sno,deg,ste) VALUES ('8','研究生','在读')
INSERT INTO statu (Sno,deg,ste) VALUES ('9','本科','在读')
INSERT INTO statu (Sno,deg,ste) VALUES ('10','本科','留级')

select * from Org
select * from Exam
select * from Course
select *  from statu
select * from Student



