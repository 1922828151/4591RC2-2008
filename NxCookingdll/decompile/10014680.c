/*
 * func-name: sub_10014680
 * func-address: 0x10014680
 * callers: 0x1000c840
 * callees: 0x10014640, 0x10014910, 0x10016380, 0x10016540
 */

char __userpurge sub_10014680@<al>(int *a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4)
{
  char result; // al
  char v6; // bl
  int v7; // eax
  char v8; // bl
  int v9; // eax
  bool v10; // zf
  int v11; // eax
  int v12; // edi
  int (__thiscall ***v13)(_DWORD, int); // eax
  int v14; // eax
  int v15; // edi
  char v16; // bl
  unsigned int i; // ecx
  int v18; // eax
  int v21; // [esp+Ch] [ebp-8h] BYREF
  char v22[4]; // [esp+10h] [ebp-4h] BYREF
  void *retaddr; // [esp+14h] [ebp+0h]
  int v24; // [esp+1Ch] [ebp+8h]
  int v25; // [esp+1Ch] [ebp+8h]
  int v26; // [esp+20h] [ebp+Ch]

  result = sub_10016380(86, 65, 76, 69, v22, &v21, a4);
  if ( result )
  {
    v6 = v21;
    v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a4 + 12))(a4, a2);
    v24 = v7;
    if ( v6 )
    {
      HIBYTE(v24) = v7;
      LOBYTE(v24) = HIBYTE(v7);
      BYTE1(v24) = BYTE2(v7);
      BYTE2(v24) = BYTE1(v7);
    }
    v8 = v22[0];
    a1[1] = v24;
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 12))(a4);
    v25 = v9;
    if ( v8 )
    {
      HIBYTE(v25) = v9;
      LOBYTE(v25) = HIBYTE(v9);
      BYTE1(v25) = BYTE2(v9);
      BYTE2(v25) = BYTE1(v9);
    }
    v10 = *a1 == 0;
    a1[2] = v25;
    if ( !v10 )
    {
      v11 = sub_10014910();
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 12))(v11, *a1);
      *a1 = 0;
    }
    v12 = a1[2] + 4 * a1[1];
    v13 = (int (__thiscall ***)(_DWORD, int))sub_10014910();
    v14 = (**v13)(v13, v12);
    v15 = v14;
    *a1 = v14;
    if ( v14 )
    {
      v16 = v21;
      a1[4] = v14 + 4 * a1[1];
      a1[3] = v14;
      v26 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a4 + 12))(a4, 0, a3);
      if ( v16 )
      {
        LOBYTE(v26) = HIBYTE(v26);
        BYTE1(v26) = BYTE2(v26);
      }
      sub_10016540(v26, a1[1], v15, a4, retaddr);
      for ( i = 0; i < a1[1]; *(_WORD *)(a1[3] + 4 * v18 - 4) = *(_WORD *)(v15 + 2 * v18 - 2) )
        v18 = a1[1] - i++;
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a4 + 24))(a4, a1[4], a1[2]);
      sub_10014640(a1);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
