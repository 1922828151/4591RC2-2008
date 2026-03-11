/*
 * func-name: sub_100ECDB0
 * func-address: 0x100ecdb0
 * callers: 0x100ed2d0
 * callees: 0x100220e0, 0x100228a0
 */

int __cdecl sub_100ECDB0(int a1, int a2, int a3)
{
  int v3; // ebx
  int v4; // ebp

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v3 -= 124;
    v4 -= 124;
    std::string::operator=(v4, v3);
    sub_100220E0(v4 + 28, v3 + 28);
    sub_100228A0(v4 + 44, v3 + 44);
    qmemcpy((void *)(v4 + 60), (const void *)(v3 + 60), 0x40u);
  }
  while ( v3 != a1 );
  return v4;
}
