/*
 * func-name: sub_10127B10
 * func-address: 0x10127b10
 * callers: 0x101220b0
 * callees: 0x101189f0
 */

int __thiscall sub_10127B10(_DWORD *this)
{
  if ( *((float *)RenderDevice::Instance() + 411) < 3.0 )
    return this[4];
  else
    return this[6];
}
