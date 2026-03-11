/*
 * func-name: sub_10018590
 * func-address: 0x10018590
 * callers: 0x100126b0
 * callees: 0x10013710, 0x10014910, 0x10017150, 0x100171d0, 0x10017360, 0x100173f0, 0x100175a0, 0x10017da0, 0x10018330, 0x10018350
 */

char __thiscall sub_10018590(int this, float *a2)
{
  float v4; // ebx
  int (__stdcall ***v5)(size_t, int); // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  float v8; // edx
  float v9; // eax
  float v10; // edx
  float v11; // eax
  int *v12; // ecx
  int v13; // esi
  int (__stdcall ***v14)(size_t, int); // eax
  float v15[19]; // [esp+8h] [ebp-4Ch] BYREF

  if ( !*(_DWORD *)a2 || !sub_10018330(*(_DWORD **)a2) )
    return 0;
  if ( *((_DWORD *)a2 + 1) != 1 )
    return sub_10013710(
             "OPCODE WARNING: supports complete trees only! Use mLimit = 1.\n",
             (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Opcode\\src\\OPC_Model.cpp",
             146);
  sub_10018350(*(_DWORD **)a2);
  sub_100175A0((int *)this);
  *(float *)(this + 4) = *a2;
  v4 = *(float *)(*(_DWORD *)a2 + 8);
  if ( LODWORD(v4) == 1 )
  {
    *(_DWORD *)(this + 8) |= 4u;
    return 1;
  }
  v5 = sub_10014910();
  v6 = (_DWORD *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v5)(v5, 28, 24);
  if ( v6 )
    v7 = sub_10017150(v6);
  else
    v7 = 0;
  *(_DWORD *)(this + 12) = v7;
  if ( !v7 )
    return 0;
  sub_10017DA0(v15);
  v8 = a2[1];
  v9 = a2[2];
  v15[18] = *a2;
  v15[3] = a2[3];
  v15[1] = v8;
  v10 = a2[4];
  v15[2] = v9;
  v11 = a2[5];
  v12 = *(int **)(this + 12);
  v15[4] = v10;
  v15[5] = v11;
  v15[6] = v4;
  if ( !sub_100171D0(v12, (int)v15) )
    return 0;
  if ( !sub_100173F0((_DWORD *)this, *((_BYTE *)a2 + 24), *((_BYTE *)a2 + 25))
    || !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 16) + 4))(
          *(_DWORD *)(this + 16),
          *(_DWORD *)(this + 12)) )
  {
    return 0;
  }
  if ( *((_BYTE *)a2 + 26) )
    return 1;
  v13 = *(_DWORD *)(this + 12);
  if ( !v13 )
    return 1;
  sub_10017360(*(_DWORD *)(this + 12));
  v14 = sub_10014910();
  ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v14)[3])(v14, v13);
  *(_DWORD *)(this + 12) = 0;
  return 1;
}
