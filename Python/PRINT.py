
N = 20;
n = 1;

def fun1():
	global N, n;
	if (n <= N):
		print(n, end = " ");
		n += 1;
		fun2();
	else:
		return;


def fun2():
	global N, n;
	if (n <= N):
		print(n, end = " ");
		n += 1;
		fun1();
	else:
		return;


if _name_ == '_main_':

	fun1();
