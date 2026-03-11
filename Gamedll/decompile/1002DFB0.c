/*
 * func-name: sub_1002DFB0
 * func-address: 0x1002dfb0
 * callers: 0x1002e040
 * callees: 0x1002db70, 0x102c9d62
 */

int __usercall sub_1002DFB0@<eax>(char *a1@<edx>, int a2@<ecx>, const char **a3@<esi>)
{
  _BYTE *v4; // eax
  const char *v5; // ecx
  _BYTE *v6; // edx
  char v7; // al
  char v8; // [esp+8h] [ebp-404h] BYREF
  _BYTE v9[1023]; // [esp+9h] [ebp-403h] BYREF

  if ( (unsigned int)(&(*a3)[strlen(*a3) + 1] - *a3 + 2 * a2) > 0x3E8 )
    return 0;
  v8 = 95;
  v4 = sub_1002DB70(v9, a1, a2);
  v5 = *a3;
  v6 = v4;
  do
  {
    v7 = *v5;
    *v6++ = *v5++;
  }
  while ( v7 );
  return PyString_FromString(&v8);
}
