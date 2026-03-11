/*
 * func-name: ??0Sect_Block_Allocator@Utility@Outpop@@QAE@XZ
 * func-address: 0x10002bd0
 * callers: 0x1000e110
 * callees: 0x100059a0
 */

Outpop::Utility::Sect_Block_Allocator *__thiscall Outpop::Utility::Sect_Block_Allocator::Sect_Block_Allocator(
        Outpop::Utility::Sect_Block_Allocator *this)
{
  sub_100059A0(this, 16);
  sub_100059A0((char *)this + 44, 32);
  sub_100059A0((char *)this + 88, 64);
  sub_100059A0((char *)this + 132, 128);
  sub_100059A0((char *)this + 176, 256);
  sub_100059A0((char *)this + 220, 512);
  sub_100059A0((char *)this + 264, 1024);
  sub_100059A0((char *)this + 308, 2048);
  sub_100059A0((char *)this + 352, 4096);
  sub_100059A0((char *)this + 396, 0x2000);
  sub_100059A0((char *)this + 440, 0x4000);
  sub_100059A0((char *)this + 484, 0x8000);
  sub_100059A0((char *)this + 528, 0x10000);
  return this;
}
