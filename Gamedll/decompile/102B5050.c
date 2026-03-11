/*
 * func-name: sub_102B5050
 * func-address: 0x102b5050
 * callers: 0x1000bda7
 * callees: 0x10001fdc
 */

int sub_102B5050()
{
  int v1; // [esp-20h] [ebp-28h] BYREF
  int v2; // [esp-1Ch] [ebp-24h]
  int v3; // [esp-18h] [ebp-20h]
  int v4; // [esp-14h] [ebp-1Ch]
  int v5; // [esp-10h] [ebp-18h]
  int v6; // [esp-Ch] [ebp-14h]
  int v7; // [esp-8h] [ebp-10h]
  void (__cdecl *v8)(int); // [esp-4h] [ebp-Ch]
  int *v9; // [esp+4h] [ebp-4h]

  v8 = (void (__cdecl *)(int))&sub_100099E4;
  v9 = &v1;
  std::string::string(&v1, "sethdr");
  GUIConsole::DeclareSymbol(2, v1, v2, v3, v4, v5, v6, v7, (int)v8);
  v8 = (void (__cdecl *)(int))&sub_1000F416;
  v9 = &v1;
  std::string::string(&v1, "printprecachingnames");
  GUIConsole::DeclareSymbol(2, v1, v2, v3, v4, v5, v6, v7, (int)v8);
  v8 = (void (__cdecl *)(int))&sub_10009F52;
  v9 = &v1;
  std::string::string(&v1, "printprecachedclasses");
  GUIConsole::DeclareSymbol(2, v1, v2, v3, v4, v5, v6, v7, (int)v8);
  v8 = (void (__cdecl *)(int))&sub_10006F23;
  v9 = &v1;
  std::string::string(&v1, "setphysxviz");
  GUIConsole::DeclareSymbol(2, v1, v2, v3, v4, v5, v6, v7, (int)v8);
  v8 = (void (__cdecl *)(int))&sub_10005D94;
  v9 = &v1;
  std::string::string(&v1, "setphysxstats");
  GUIConsole::DeclareSymbol(2, v1, v2, v3, v4, v5, v6, v7, (int)v8);
  v8 = (void (__cdecl *)(int))&unk_103B80F2;
  v9 = &v1;
  std::string::string(&v1, "showstats");
  GUIConsole::DeclareSymbol(9, v1, v2, v3, v4, v5, v6, v7, (int)v8);
  v8 = (void (__cdecl *)(int))j_nullsub_73;
  v9 = &v1;
  std::string::string(&v1, "showbbox");
  GUIConsole::DeclareSymbol(2, v1, v2, v3, v4, v5, v6, v7, (int)v8);
  v8 = (void (__cdecl *)(int))&sub_10017166;
  v9 = &v1;
  std::string::string(&v1, "showpartition");
  GUIConsole::DeclareSymbol(2, v1, v2, v3, v4, v5, v6, v7, (int)v8);
  v8 = (void (__cdecl *)(int))sub_10005D7B;
  v9 = &v1;
  std::string::string(&v1, "setpartitionheight");
  GUIConsole::DeclareSymbol(2, v1, v2, v3, v4, v5, v6, v7, (int)v8);
  v8 = sub_100096F6;
  v9 = &v1;
  std::string::string(&v1, "rt");
  GUIConsole::DeclareSymbol(2, v1, v2, v3, v4, v5, v6, v7, (int)v8);
  v8 = (void (__cdecl *)(int))&sub_10010541;
  v9 = &v1;
  std::string::string(&v1, "setviztype");
  GUIConsole::DeclareSymbol(2, v1, v2, v3, v4, v5, v6, v7, (int)v8);
  v8 = (void (__cdecl *)(int))&sub_1000B7EE;
  v9 = &v1;
  std::string::string(&v1, "setvisbias");
  GUIConsole::DeclareSymbol(2, v1, v2, v3, v4, v5, v6, v7, (int)v8);
  v8 = (void (__cdecl *)(int))sub_100074C8;
  v9 = &v1;
  std::string::string(&v1, "enablelogic");
  GUIConsole::DeclareSymbol(2, v1, v2, v3, v4, v5, v6, v7, (int)v8);
  v8 = sub_1000BFC8;
  v9 = &v1;
  std::string::string(&v1, "disablelogic");
  GUIConsole::DeclareSymbol(2, v1, v2, v3, v4, v5, v6, v7, (int)v8);
  v8 = (void (__cdecl *)(int))sub_10003F80;
  v9 = &v1;
  std::string::string(&v1, "ai");
  GUIConsole::DeclareSymbol(2, v1, v2, v3, v4, v5, v6, v7, (int)v8);
  v8 = (void (__cdecl *)(int))&sub_1000385F;
  v9 = &v1;
  std::string::string(&v1, "moveself");
  return GUIConsole::DeclareSymbol(2, v1, v2, v3, v4, v5, v6, v7, (int)v8);
}
