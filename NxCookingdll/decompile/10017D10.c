/*
 * func-name: sub_10017D10
 * func-address: 0x10017d10
 * callers: none
 * callees: none
 */

int __thiscall sub_10017D10(int this)
{
  int result; // eax

  result = 0;
  if ( *(_DWORD *)(this + 16) )
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 16) + 28))(*(_DWORD *)(this + 16));
  if ( *(_DWORD *)(this + 32) )
    result += 4 * *(_DWORD *)(this + 28);
  if ( *(_DWORD *)(this + 24) )
    result += 4 * *(_DWORD *)(this + 20);
  return result;
}
