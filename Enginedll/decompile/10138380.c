/*
 * func-name: ?InitializeScripts@World@@AAEXXZ
 * func-address: 0x10138380
 * callers: 0x1013e2e0
 * callees: 0x1000d4b0, 0x101198c0, 0x10119cc0, 0x101a2500
 */

void __thiscall World::InitializeScripts(World *this)
{
  unsigned int v1; // ebx
  _DWORD *v2; // esi
  unsigned int v3; // ebp
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  struct Actor *v9; // edx
  _DWORD *v10; // [esp-4Ch] [ebp-C0h]
  int v11[16]; // [esp-48h] [ebp-BCh] BYREF
  struct Actor *v12; // [esp-8h] [ebp-7Ch]
  struct World *v13; // [esp-4h] [ebp-78h]
  struct World *v14; // [esp+10h] [ebp-64h]
  int *v15; // [esp+14h] [ebp-60h]
  int v16; // [esp+18h] [ebp-5Ch] BYREF
  void *v17; // [esp+1Ch] [ebp-58h]
  int v18; // [esp+20h] [ebp-54h]
  _DWORD v19[19]; // [esp+28h] [ebp-4Ch] BYREF

  v14 = this;
  std::vector<Actor *>::vector<Actor *>(&v16, (int)this + 3220);
  v1 = 0;
  v19[18] = 0;
  while ( 1 )
  {
    v2 = v17;
    if ( !v17 )
      break;
    v3 = (v18 - (int)v17) >> 2;
    if ( v1 >= v3 )
    {
      operator delete(v17);
      return;
    }
    if ( std::string::length(*((_DWORD *)v17 + v1) + 500) )
    {
      if ( v1 >= v3 )
        invalid_parameter_noinfo();
      if ( (unsigned __int8)std::operator!=<char>(v2[v1] + 500, "StaticMesh") )
      {
        if ( v1 >= v3 )
          invalid_parameter_noinfo();
        qmemcpy(v19, (const void *)(v2[v1] + 868), 0x40u);
        if ( v1 >= v3 )
          invalid_parameter_noinfo();
        v4 = v17;
        v5 = (_DWORD *)*((_DWORD *)v17 + v1);
        v6 = v5[214];
        v7 = v5[215];
        v8 = v5[216];
        v19[12] = v6;
        v19[13] = v7;
        v19[14] = v8;
        if ( v1 >= v3 )
          invalid_parameter_noinfo();
        v9 = (struct Actor *)v4[v1];
        v13 = v14;
        v12 = v9;
        v15 = v11;
        qmemcpy(v11, v19, sizeof(v11));
        if ( v1 >= v3 )
          invalid_parameter_noinfo();
        v10 = (_DWORD *)(*((_DWORD *)v17 + v1) + 472);
        sub_10119CC0();
        sub_101198C0(
          v10,
          v11[0],
          v11[1],
          v11[2],
          v11[3],
          v11[4],
          v11[5],
          v11[6],
          v11[7],
          v11[8],
          v11[9],
          v11[10],
          v11[11],
          v11[12],
          v11[13],
          v11[14],
          v11[15],
          v12,
          v13);
      }
    }
    ++v1;
  }
}
