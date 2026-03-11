/*
 * func-name: sub_1002D920
 * func-address: 0x1002d920
 * callers: 0x1002db30
 * callees: 0x10014910, 0x10015980, 0x100159a0, 0x10015a80, 0x1002d2a0
 */

char __thiscall sub_1002D920(_DWORD *this)
{
  int (__stdcall ***v2)(size_t, int); // eax
  int v3; // edi
  int (__stdcall ***v4)(size_t, int); // eax
  unsigned __int8 *v5; // ebp
  int (__stdcall ***v6)(size_t, int); // eax
  unsigned __int8 *v7; // ebx
  int v8; // eax
  unsigned __int8 *v9; // ecx
  unsigned int *v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // edx
  int v14; // edi
  int v15; // edx
  int (__stdcall ***v16)(size_t, int); // eax
  int (__stdcall ***v17)(size_t, int); // eax
  int (__stdcall ***v18)(size_t, int); // eax
  int (__stdcall ***v20)(size_t, int); // eax
  int (__stdcall ***v21)(size_t, int); // eax
  int (__stdcall ***v22)(size_t, int); // eax
  unsigned int v23; // [esp+0h] [ebp-40h]
  _DWORD *v24; // [esp+18h] [ebp-28h]
  unsigned int v25; // [esp+1Ch] [ebp-24h]
  int v26; // [esp+1Ch] [ebp-24h]
  unsigned int v27; // [esp+20h] [ebp-20h]
  _DWORD *v28; // [esp+24h] [ebp-1Ch]
  unsigned int v29[6]; // [esp+28h] [ebp-18h] BYREF

  v2 = sub_10014910();
  v3 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v2)(v2, 4 * this[56], 1);
  v24 = (_DWORD *)v3;
  v4 = sub_10014910();
  v5 = (unsigned __int8 *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v4)(v4, 4 * this[56], 1);
  v6 = sub_10014910();
  v7 = (unsigned __int8 *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v6)(v6, 4 * this[56], 1);
  v8 = 0;
  if ( v3 && v5 )
  {
    if ( v7 )
    {
      v25 = 0;
      if ( this[56] )
      {
        v9 = v7;
        do
        {
          *(_DWORD *)&v9[v5 - v7] = *(_DWORD *)(v8 + this[62] + 24);
          *(_DWORD *)v9 = *(_DWORD *)(v8 + this[62] + 28);
          v8 += 48;
          v9 += 4;
          ++v25;
        }
        while ( v25 < this[56] );
      }
      sub_10015980(v29);
      v23 = this[56];
      v10 = sub_10015A80(v29, v7, v23, 1);
      v28 = (_DWORD *)sub_10015A80(v10, v5, v23, 1)[1];
      v11 = *(_DWORD *)&v5[4 * *v28];
      v26 = *(_DWORD *)&v7[4 * *v28];
      v12 = 0;
      v13 = 0;
      v27 = 0;
      if ( this[56] )
      {
        do
        {
          v14 = v28[v13];
          if ( *(_DWORD *)&v5[4 * v14] == v11 && *(_DWORD *)&v7[4 * v14] == v26 )
          {
            v24[v12++] = v14;
          }
          else
          {
            sub_1002D2A0(this, (int)v24, v12, v11, v26);
            v15 = *(_DWORD *)&v7[4 * v14];
            v11 = *(_DWORD *)&v5[4 * v14];
            *v24 = v14;
            v26 = v15;
            v12 = 1;
          }
          v13 = ++v27;
        }
        while ( v27 < this[56] );
        v3 = (int)v24;
      }
      sub_1002D2A0(this, v3, v12, v11, v26);
      v16 = sub_10014910();
      ((void (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned __int8 *))(*v16)[3])(v16, v7);
      v17 = sub_10014910();
      ((void (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned __int8 *))(*v17)[3])(v17, v5);
      v18 = sub_10014910();
      ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v18)[3])(v18, v3);
      sub_100159A0((int)v29);
      return 1;
    }
  }
  else if ( v7 )
  {
    v20 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned __int8 *))(*v20)[3])(v20, v7);
  }
  if ( v5 )
  {
    v21 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned __int8 *))(*v21)[3])(v21, v5);
  }
  if ( v3 )
  {
    v22 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v22)[3])(v22, v3);
  }
  return 0;
}
