/*
 * func-name: sub_1000BA30
 * func-address: 0x1000ba30
 * callers: 0x10008250, 0x1000b210, 0x1000b9e0
 * callees: none
 */

int *__usercall sub_1000BA30@<eax>(int *result@<eax>, int *a2@<ecx>, int *a3)
{
  int *v3; // ebx
  int *v4; // edi
  int v5; // esi
  int v6; // eax
  bool v7; // zf

  v3 = a2;
  v4 = result;
  if ( a2 != a3 )
  {
    do
    {
      v5 = *v4;
      if ( *v4 && !InterlockedDecrement((volatile LONG *)(v5 + 4)) && v5 )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
      v6 = *v3;
      v7 = *v3 == 0;
      *v4 = *v3;
      if ( !v7 )
        InterlockedIncrement((volatile LONG *)(v6 + 4));
      ++v3;
      ++v4;
    }
    while ( v3 != a3 );
    return v4;
  }
  return result;
}
