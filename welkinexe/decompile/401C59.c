/*
 * func-name: sub_401C59
 * func-address: 0x401c59
 * callers: none
 * callees: none
 */

int (*sub_401C59())(void)
{
  int (*result)(void); // eax
  int (**v1)(void); // esi

  result = (int (*)(void))&unk_404CB8;
  v1 = (int (**)(void))&unk_404CB8;
  if ( &unk_404CB8 < (_UNKNOWN *)dword_404DB8 )
  {
    do
    {
      result = *v1;
      if ( *v1 )
        result = (int (*)(void))result();
      ++v1;
    }
    while ( v1 < dword_404DB8 );
  }
  return result;
}
