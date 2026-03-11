/*
 * func-name: ?GetControlName@Input@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
 * func-address: 0x100db4d0
 * callers: 0x100b3c70
 * callees: none
 */

int __thiscall Input::GetControlName(_DWORD *this, int a2, unsigned int a3)
{
  int v4; // eax

  v4 = this[7];
  if ( !v4 || a3 >= (this[8] - v4) / 28 )
    invalid_parameter_noinfo();
  std::string::string(a2, this[7] + 28 * a3);
  return a2;
}
