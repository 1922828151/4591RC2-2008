/*
 * func-name: sub_1011F510
 * func-address: 0x1011f510
 * callers: 0x1011f6d0
 * callees: 0x100220e0, 0x100228a0
 */

int __cdecl sub_1011F510(int a1, int a2, int a3)
{
  int v3; // ebx
  int v4; // ebp
  const void *v5; // esi
  void *v6; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    std::string::operator=(v4, v3);
    sub_100220E0(v4 + 28, v3 + 28);
    sub_100228A0(v4 + 44, v3 + 44);
    v5 = (const void *)(v3 + 60);
    v6 = (void *)(v4 + 60);
    v3 += 124;
    v4 += 124;
    qmemcpy(v6, v5, 0x40u);
  }
  while ( v3 != a2 );
  return v4;
}
