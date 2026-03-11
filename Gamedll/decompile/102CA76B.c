/*
 * func-name: sub_102CA76B
 * func-address: 0x102ca76b
 * callers: 0x102ca1a5
 * callees: none
 */

int (*sub_102CA76B())(void)
{
  int (*result)(void); // eax
  int (**v1)(void); // esi

  result = (int (*)(void))&unk_10336EB8;
  v1 = (int (**)(void))&unk_10336EB8;
  if ( &unk_10336EB8 < (_UNKNOWN *)dword_10336FB8 )
  {
    do
    {
      result = *v1;
      if ( *v1 )
        result = (int (*)(void))result();
      ++v1;
    }
    while ( v1 < dword_10336FB8 );
  }
  return result;
}
