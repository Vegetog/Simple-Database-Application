
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

INSERT INTO student (Sno,Sname,sex,class,live) VALUES ('1','С��','��','�ƿ�2201','��ɳ��')
INSERT INTO student (Sno,Sname,sex,class,live) VALUES ('2','С��','��','�ƿ�2201','Ǯ����')
INSERT INTO student (Sno,Sname,sex,class,live) VALUES ('3','С��','��','�ƿ�2201','��ɳ��')
INSERT INTO student (Sno,Sname,sex,class,live) VALUES ('4','С��','��','�ƿ�2202','��ɳ��')
INSERT INTO student (Sno,Sname,sex,class,live) VALUES ('5','С��','��','�ƿ�2202','Ǯ����')
INSERT INTO student (Sno,Sname,sex,class,live) VALUES ('6','С��','��','�ƿ�2202','��ɳ��')
INSERT INTO student (Sno,Sname,sex,class,live) VALUES ('7','С��','��','�ƿ�2202','��ɳ��')
INSERT INTO student (Sno,Sname,sex,class,live) VALUES ('8','С��','��','�ƿ�2202','Ǯ����')
INSERT INTO student (Sno,Sname,sex,class,live) VALUES ('9','Сׯ','��','�ƿ�2203','��ɳ��')
INSERT INTO student (Sno,Sname,sex,class,live) VALUES ('10','С��','Ů','�ƿ�2203','��ɳ��')

INSERT INTO Org (Cno,class,college) VALUES ('1','�ƿ�2201','�������ѧ�뼼��ѧԺ')
INSERT INTO Org (Cno,class,college) VALUES ('2','�ƿ�2202','�������ѧ�뼼��ѧԺ')
INSERT INTO Org (Cno,class,college) VALUES ('3','�ƿ�2203','�������ѧ�뼼��ѧԺ')

INSERT INTO Course (Cono,Coname,unit,teacher,place) VALUES ('1','���ݿ�ԭ��',2,'����Ȼ','A322')
INSERT INTO Course (Cono,Coname,unit,teacher,place) VALUES ('2','�����߼�',2,'����','A423')
INSERT INTO Course (Cono,Coname,unit,teacher,place) VALUES ('3','�������������',3,'������','A323')
INSERT INTO Course (Cono,Coname,unit,teacher,place) VALUES ('4','������������ͳ��II',3,'������','C408')
INSERT INTO Course (Cono,Coname,unit,teacher,place) VALUES ('5','����ƹ����',1,'κǿ','��������һ¥')
INSERT INTO Course (Cono,Coname,unit,teacher,place) VALUES ('6','�й����ִ�ʷ��Ҫ',3,'��ī��','C108')

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

INSERT INTO statu (Sno,deg,ste) VALUES ('1','����','�ڶ�')
INSERT INTO statu (Sno,deg,ste) VALUES ('2','�о���','�ڶ�')
INSERT INTO statu (Sno,deg,ste) VALUES ('3','����','����')
INSERT INTO statu (Sno,deg,ste) VALUES ('4','����','�ڶ�')
INSERT INTO statu (Sno,deg,ste) VALUES ('5','�о���','�ڶ�')
INSERT INTO statu (Sno,deg,ste) VALUES ('6','����','��ҵ')
INSERT INTO statu (Sno,deg,ste) VALUES ('7','����','�ڶ�')
INSERT INTO statu (Sno,deg,ste) VALUES ('8','�о���','�ڶ�')
INSERT INTO statu (Sno,deg,ste) VALUES ('9','����','�ڶ�')
INSERT INTO statu (Sno,deg,ste) VALUES ('10','����','����')

select * from Org
select * from Exam
select * from Course
select *  from statu
select * from Student



