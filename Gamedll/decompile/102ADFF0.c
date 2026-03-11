/*
 * func-name: sub_102ADFF0
 * func-address: 0x102adff0
 * callers: 0x10013a3e
 * callees: 0x102bd7e0, 0x102bdb40
 */

int __thiscall sub_102ADFF0(Outpop::Utility::Task *this)
{
  char v2; // al
  _DWORD v4[5]; // [esp-38h] [ebp-58h] BYREF
  int v5; // [esp-24h] [ebp-44h]
  int v6; // [esp-20h] [ebp-40h]
  int v7; // [esp-1Ch] [ebp-3Ch] BYREF
  int v8; // [esp-18h] [ebp-38h]
  int v9; // [esp-14h] [ebp-34h]
  int v10; // [esp-10h] [ebp-30h]
  int v11; // [esp-Ch] [ebp-2Ch]
  int v12; // [esp-8h] [ebp-28h]
  int v13; // [esp-4h] [ebp-24h]
  int v14; // [esp+0h] [ebp-20h]
  struct _SECURITY_ATTRIBUTES *v15; // [esp+4h] [ebp-1Ch]
  unsigned int *v16; // [esp+8h] [ebp-18h]
  unsigned int *v17; // [esp+Ch] [ebp-14h]
  unsigned int *v18; // [esp+10h] [ebp-10h]
  int v19; // [esp+1Ch] [ebp-4h]

  v17 = (unsigned int *)&v7;
  std::string::string(&v7, "Game.Networking");
  v18 = v4;
  v19 = 0;
  std::string::string(v4, "EnableP2P");
  LOBYTE(v19) = 1;
  Engine::Instance(v4[0]);
  v19 = -1;
  if ( !(unsigned __int8)sub_102BD7E0(v4[0], v4[1], v4[2], v4[3], v4[4], v5, v6, v7, v8, v9, v10, v11, v12, v13) )
    *((_BYTE *)this + 76) = 0;
  v18 = (unsigned int *)&v7;
  std::string::string(&v7, "Game.Networking");
  v17 = v4;
  v19 = 2;
  std::string::string(v4, "EnableP2P");
  LOBYTE(v19) = 3;
  Engine::Instance(v4[0]);
  v2 = sub_102BDB40(v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18);
  v18 = 0;
  v17 = 0;
  v16 = 0;
  v15 = 0;
  v14 = 1;
  *((_BYTE *)this + 76) = v2;
  return Outpop::Utility::Task::activate(this, v14, v15, v16, v17, v18);
}
