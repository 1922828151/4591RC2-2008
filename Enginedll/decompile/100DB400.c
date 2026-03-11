/*
 * func-name: ?GetMask@Input@@QAE?AW4InputMaskState@@H@Z
 * func-address: 0x100db400
 * callers: none
 * callees: none
 */

int __thiscall Input::GetMask(_DWORD *this, int a2)
{
  if ( a2 == -1 )
    return 2;
  else
    return this[a2 + 430];
}
