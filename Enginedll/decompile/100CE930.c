/*
 * func-name: sub_100CE930
 * func-address: 0x100ce930
 * callers: 0x100b3960, 0x100b4480
 * callees: 0x100ce570
 */

int __thiscall sub_100CE930(_DWORD *this, const void *a2)
{
  int result; // eax

  result = sub_100CE570((int)this, this[1] + 1);
  if ( result >= 0 )
  {
    qmemcpy((void *)(*this + 140 * this[1]++), a2, 0x8Cu);
    return 0;
  }
  return result;
}
