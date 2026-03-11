/*
 * func-name: sub_1001FCF0
 * func-address: 0x1001fcf0
 * callers: none
 * callees: none
 */

int __userpurge sub_1001FCF0@<eax>(int a1@<ecx>, int a2, int a3, int a4, int a5)
{
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  _DWORD *v8; // edi
  _DWORD *v9; // eax
  int v10; // eax
  Outpop::Utility::Ref_Object *v12; // [esp+0h] [ebp-20h]
  int retaddr; // [esp+20h] [ebp+0h]

  v6 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 12) + 16))(a1 + 12);
  v7 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(a2 + 8) + 16))(a2 + 8);
  *v7 = *v6;
  v7[1] = v6[1];
  v7[2] = v6[2];
  v7[3] = v6[3];
  v8 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 40) + 16))(a1 + 40);
  v9 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(a2 + 36) + 16))(a2 + 36);
  *v9 = *v8;
  v9[1] = v8[1];
  v9[2] = v8[2];
  v9[3] = v8[3];
  v10 = *(_DWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 80) = -1;
  *(_DWORD *)a2 = v10;
  *(_BYTE *)(a2 + 72) = 1;
  v12 = *(Outpop::Utility::Ref_Object **)(a1 + 8);
  if ( v12 )
    Outpop::Utility::Ref_Object::addref(v12);
  retaddr = -1;
  return (*(int (__thiscall **)(_DWORD, int, int, int))(**(_DWORD **)(a1 + 88) + 24))(*(_DWORD *)(a1 + 88), a2, a4, a5);
}
