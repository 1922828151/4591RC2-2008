/*
 * func-name: ?GetItem@CREListBox@@QAEPAUREListBoxItem@@H@Z
 * func-address: 0x100b0b50
 * callers: 0x1006a5d0
 * callees: none
 */

struct REListBoxItem *__thiscall CREListBox::GetItem(CREListBox *this, int a2)
{
  if ( a2 < 0 || a2 >= *((_DWORD *)this + 304) )
    return 0;
  else
    return *(struct REListBoxItem **)(*((_DWORD *)this + 303) + 4 * a2);
}
