/*
 * func-name: sub_10020910
 * func-address: 0x10020910
 * callers: 0x1001f4a0
 * callees: 0x1001f4a0, 0x10020960
 */

int __cdecl sub_10020910(int a1, int a2, int a3, _DWORD *a4)
{
  int v4; // ebx
  _DWORD *v5; // edi
  int result; // eax
  int v7; // [esp-10h] [ebp-20h]
  int v8; // [esp-Ch] [ebp-1Ch]

  v4 = a3;
  v5 = a4;
  result = sub_10020960(&a2, a3, a4);
  if ( a2 )
  {
    v8 = a2;
    v7 = *(_DWORD *)(a1 + 120);
    *(_DWORD *)(a1 + 236) = sub_1001F470;
    return sub_1001F4A0(a1, 0, v7, v8, v4, v5);
  }
  return result;
}
