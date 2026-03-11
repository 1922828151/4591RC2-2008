/*
 * func-name: sub_100131A0
 * func-address: 0x100131a0
 * callers: 0x10007d70, 0x100242e0, 0x1002fc50
 * callees: none
 */

int __cdecl sub_100131A0(int a1, char a2, int a3)
{
  int v4; // [esp+Ch] [ebp+8h]

  if ( a2 )
  {
    LOBYTE(v4) = HIBYTE(a1);
    BYTE1(v4) = BYTE2(a1);
    BYTE2(v4) = BYTE1(a1);
    HIBYTE(v4) = a1;
    a1 = v4;
  }
  return (*(int (__stdcall **)(int))(*(_DWORD *)a3 + 40))(a1);
}
