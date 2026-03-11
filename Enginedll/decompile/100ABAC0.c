/*
 * func-name: ?GetTabPage@CRETabPages@@QAEPAUREPage@@H@Z
 * func-address: 0x100abac0
 * callers: none
 * callees: none
 */

struct REPage *__thiscall CRETabPages::GetTabPage(CRETabPages *this, int a2)
{
  return (struct REPage *)(*((_DWORD *)this + 133) + 532 * a2);
}
