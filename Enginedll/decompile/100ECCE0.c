/*
 * func-name: sub_100ECCE0
 * func-address: 0x100ecce0
 * callers: 0x100edc30
 * callees: 0x100220e0, 0x100228a0
 */

int __cdecl sub_100ECCE0(int a1, int a2, int a3)
{
  int i; // ebx
  int result; // eax
  void *v5; // edi

  for ( i = a1; i != a2; i += 124 )
  {
    std::string::operator=(i, a3);
    sub_100220E0(i + 28, a3 + 28);
    result = sub_100228A0(i + 44, a3 + 44);
    v5 = (void *)(i + 60);
    qmemcpy(v5, (const void *)(a3 + 60), 0x40u);
  }
  return result;
}
