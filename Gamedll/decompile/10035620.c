/*
 * func-name: sub_10035620
 * func-address: 0x10035620
 * callers: 0x10002d42
 * callees: 0x1000516e, 0x1000f1dc
 */

char *__thiscall sub_10035620(char *this)
{
  struct BBox *v2; // edi
  struct Game *v3; // eax

  v2 = (struct BBox *)(this + 76);
  *((float *)this + 2) = 0.0;
  *((float *)this + 3) = 0.0;
  *((float *)this + 4) = 0.0;
  *((float *)this + 5) = 0.0;
  *((float *)this + 6) = 0.0;
  *((float *)this + 7) = 0.0;
  *((float *)this + 9) = 1.0;
  *((float *)this + 10) = 0.0;
  *((float *)this + 11) = 0.0;
  *((float *)this + 12) = 0.0;
  *((float *)this + 13) = 0.0;
  *((float *)this + 14) = 0.0;
  *((float *)this + 15) = 0.0;
  *((float *)this + 18) = 5.0;
  sub_1000F1DC();
  *((float *)this + 31) = 0.0;
  *((float *)this + 32) = 0.0;
  *((float *)this + 33) = 0.0;
  *((_DWORD *)this + 1) = 0;
  this[116] = 0;
  *((float *)this + 4) = 0.0;
  *((float *)this + 3) = 0.0;
  *((float *)this + 2) = 0.0;
  *((float *)this + 7) = 0.0;
  *((float *)this + 6) = 0.0;
  *((float *)this + 5) = 0.0;
  *((float *)this + 8) = 0.0;
  *((float *)this + 12) = 0.0;
  *((float *)this + 11) = 0.0;
  *((float *)this + 10) = 0.0;
  *((float *)this + 15) = 0.0;
  *((float *)this + 14) = 0.0;
  *((float *)this + 13) = 0.0;
  *((_DWORD *)this + 34) = -1;
  *((float *)this + 17) = 0.0;
  *((_DWORD *)this + 36) = -1;
  *(_DWORD *)this = 0;
  v3 = Game::Instance();
  World::GetWorldBBox(*((World **)v3 + 25), v2);
  return this;
}
