#include <iostream>
#include <lua.hpp>

using namespace std;

static double max(double a, double b)
{
	return a > b ? a : b;
}

static int l_max(lua_State *L)
{
	double num1 = lua_tonumber(L, 1);
	double num2 = lua_tonumber(L, 2);
	lua_pushnumber(L, max(num1, num2));
	return 1;
}

static void call_lua()
{

	printf("%s\n", LUA_RELEASE);

	lua_State *L = luaL_newstate();
	luaL_openlibs(L);
	lua_pushcfunction(L, l_max);
	lua_setglobal(L, "mymax");

	if (luaL_loadstring(L, "print('-----start call-----');print(mymax(math.randomseed(os.time()*os.time()),math.randomseed(os.time()+os.time())));print('-----end call-----');") || lua_pcall(L, 0, 0, 0))
	{
		printf("%s", lua_tostring(L, -1));
	}
	lua_close(L);
}

int main()
{
	cout << "call lua" << endl;

	call_lua();

	return 0;
}