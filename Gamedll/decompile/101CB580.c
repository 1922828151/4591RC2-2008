/*
 * func-name: ?AddFunction@FuncManager@GameClient@@QAE_NPAVFunction@2@@Z_0
 * func-address: 0x101cb580
 * callers: 0x10009246
 * callees: 0x10002766, 0x1000a04c
 */

char __thiscall GameClient::FuncManager::AddFunction(GameClient::FuncManager *this, struct GameClient::Function *a2)
{
  struct GameClient::Function *v2; // ebx
  char *v4; // eax
  struct GameClient::Function *v5; // esi
  char *v7; // [esp+Ch] [ebp-14h] BYREF
  struct GameClient::Function *v8; // [esp+10h] [ebp-10h]
  char v9[12]; // [esp+14h] [ebp-Ch] BYREF

  v2 = a2;
  a2 = (struct GameClient::Function *)*((_DWORD *)a2 + 8);
  sub_10002766((int)&v7, (int)&a2);
  v4 = (char *)this + 8;
  v5 = (struct GameClient::Function *)*((_DWORD *)this + 3);
  if ( !v7 || v7 != v4 )
    _invalid_parameter_noinfo();
  if ( v8 != v5 )
    return 0;
  v7 = (char *)*((_DWORD *)v2 + 8);
  v8 = v2;
  sub_1000A04C((int)v9, (int)&v7);
  return 1;
}
