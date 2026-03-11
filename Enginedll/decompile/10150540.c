/*
 * func-name: ?GetSoundFileName@CProgressBar@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
 * func-address: 0x10150540
 * callers: none
 * callees: none
 */

int __thiscall CProgressBar::GetSoundFileName(_DWORD **this, int a2)
{
  if ( this[183] )
    (*(void (__thiscall **)(_DWORD *, int))(*this[183] + 56))(this[183], a2);
  else
    std::string::string(a2, &unk_101CD447);
  return a2;
}
