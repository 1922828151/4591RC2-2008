/*
 * func-name: ?GetItem@CREPropertiesList@@QAEPAUREPropListItem@@H@Z
 * func-address: 0x100b14e0
 * callers: 0x1006a6b0
 * callees: none
 */

struct REPropListItem *__thiscall CREPropertiesList::GetItem(CREPropertiesList *this, int a2)
{
  if ( a2 < 0 || a2 >= *((_DWORD *)this + 306) )
    return 0;
  else
    return *(struct REPropListItem **)(*((_DWORD *)this + 305) + 4 * a2);
}
