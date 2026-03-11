/*
 * func-name: sub_1000DB00
 * func-address: 0x1000db00
 * callers: 0x1000f380, 0x1000f450, 0x10010270, 0x10010930, 0x100111d0, 0x100112c0, 0x10028840, 0x10028c20, 0x10029240, 0x10029b20, 0x10029ca0, 0x1002a950, 0x10071140, 0x100833b0, 0x10083770, 0x10083e50, 0x1008f580, 0x10096fe0, 0x100debd0, 0x100ef850, 0x10114af0, 0x10114be0, 0x10114c30, 0x101157a0, 0x1013df40, 0x101b9200, 0x101b9210, 0x101b9220, 0x101b9230, 0x101b9240
 * callees: 0x101a2500
 */

void __thiscall sub_1000DB00(int *this)
{
  int v2; // esi
  int i; // edi

  v2 = this[1];
  if ( v2 )
  {
    for ( i = this[2]; v2 != i; v2 += 28 )
      std::string::~string(v2);
    operator delete((void *)this[1]);
  }
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
}
