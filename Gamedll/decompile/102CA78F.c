/*
 * func-name: sub_102CA78F
 * func-address: 0x102ca78f
 * callers: 0x102ca1a5
 * callees: none
 */

void __cdecl sub_102CA78F()
{
  void (**v0)(void); // esi

  v0 = (void (**)(void))&unk_103370C0;
  if ( &unk_103370C0 < (_UNKNOWN *)dword_103371C0 )
  {
    do
    {
      if ( *v0 )
        (*v0)();
      ++v0;
    }
    while ( v0 < dword_103371C0 );
  }
}
