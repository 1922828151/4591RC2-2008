/*
 * func-name: ?SetMinCustomText@CRESlider@@QAEXABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z
 * func-address: 0x1006a940
 * callers: none
 * callees: none
 */

int __thiscall CRESlider::SetMinCustomText(char *this, int a2)
{
  return std::wstring::operator=(this + 580, a2);
}
