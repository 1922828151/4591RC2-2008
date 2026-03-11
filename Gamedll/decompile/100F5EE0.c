/*
 * func-name: sub_100F5EE0
 * func-address: 0x100f5ee0
 * callers: 0x10010280
 * callees: none
 */

void __cdecl sub_100F5EE0(int a1, int a2)
{
  if ( a1 )
  {
    *(_DWORD *)a1 = *(_DWORD *)a2;
    std::string::string((void *)(a1 + 4), (void *)(a2 + 4));
    *(float *)(a1 + 32) = *(float *)(a2 + 32);
  }
}
