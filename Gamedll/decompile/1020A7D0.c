/*
 * func-name: sub_1020A7D0
 * func-address: 0x1020a7d0
 * callers: 0x1000e1a1
 * callees: 0x1000f4de, 0x102c9d50
 */

// positive sp value has been detected, the output may be wrong!
void *__userpurge sub_1020A7D0@<eax>(void *a1@<ecx>, int a2@<esi>, char a3)
{
  int v6; // [esp-8h] [ebp-8h]

  sub_1000F4DE(a2, v6);
  if ( (a3 & 1) != 0 )
    operator delete(a1);
  return a1;
}
