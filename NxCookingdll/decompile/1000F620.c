/*
 * func-name: sub_1000F620
 * func-address: 0x1000f620
 * callers: 0x1000f7b0
 * callees: 0x10016380
 */

char __thiscall sub_1000F620(_DWORD *this, int a2)
{
  int v2; // esi
  char result; // al
  char v5; // bl
  int v6; // eax
  char v7; // bl
  int v8; // eax
  char v9; // cl
  char v10; // al
  int v11; // [esp+8h] [ebp-8h]
  char v12[4]; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  result = sub_10016380(71, 65, 85, 83, v12, &a2, a2);
  if ( result )
  {
    v5 = a2;
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 12))(v2);
    v11 = v6;
    if ( v5 )
    {
      HIBYTE(v11) = v6;
      LOBYTE(v11) = HIBYTE(v6);
      BYTE1(v11) = BYTE2(v6);
      BYTE2(v11) = BYTE1(v6);
    }
    v7 = a2;
    this[1] = v11;
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 12))(v2);
    a2 = v8;
    if ( v7 )
    {
      v9 = HIBYTE(a2);
      HIBYTE(a2) = v8;
      v10 = BYTE1(a2);
      LOBYTE(a2) = v9;
      BYTE1(a2) = BYTE2(a2);
      BYTE2(a2) = v10;
    }
    this[2] = a2;
    return 1;
  }
  return result;
}
