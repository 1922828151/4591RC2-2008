/*
 * func-name: sub_1009B340
 * func-address: 0x1009b340
 * callers: none
 * callees: 0x100da530, 0x101a2534
 */

IndoorVolume *__stdcall sub_1009B340(struct World *a1)
{
  IndoorVolume *v1; // eax

  v1 = (IndoorVolume *)operator new(0x468u);
  if ( v1 )
    return IndoorVolume::IndoorVolume(v1, a1);
  else
    return 0;
}
