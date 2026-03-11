/*
 * func-name: sub_10013B70
 * func-address: 0x10013b70
 * callers: 0x10011890, 0x10012c10
 * callees: none
 */

int __usercall sub_10013B70@<eax>(_BYTE *a1@<eax>, char *a2@<ecx>)
{
  char v4; // al

  do
  {
    v4 = toupper(*a2);
    *a1++ = v4;
    ++a2;
  }
  while ( v4 );
  return 0;
}
