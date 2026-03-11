/*
 * func-name: sub_10289870
 * func-address: 0x10289870
 * callers: 0x10011315
 * callees: 0x102c8d6c
 */

int __thiscall sub_10289870(CREStatic **this, int a2)
{
  const char *v3; // eax
  const wchar_t *v4; // eax

  if ( (dword_103B7D54 & 1) == 0 )
  {
    dword_103B7D54 |= 1u;
    flt_103B7D40 = 0.90196085;
    flt_103B7D44 = 0.27843139;
    flt_103B7D48 = 0.031372551;
    flt_103B7D4C = 1.0;
  }
  v3 = (const char *)std::string::c_str(a2);
  v4 = atow(v3);
  return CREStatic::SetText(this[975], v4);
}
