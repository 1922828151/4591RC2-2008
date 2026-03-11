/*
 * func-name: ?SetSound@CProgressBar@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10150500
 * callers: 0x1014a750
 * callees: 0x10109f50, 0x1010be70
 */

char *__thiscall CProgressBar::SetSound(struct Sound **this, int a2)
{
  char **v2; // esi
  char *result; // eax
  char v4; // [esp-20h] [ebp-28h] BYREF
  int v5; // [esp-1Ch] [ebp-24h]
  int v6; // [esp-18h] [ebp-20h]
  int v7; // [esp-14h] [ebp-1Ch]
  int v8; // [esp-10h] [ebp-18h]
  int v9; // [esp-Ch] [ebp-14h]
  int v10; // [esp-8h] [ebp-10h]
  int v11; // [esp-4h] [ebp-Ch]
  char *v12; // [esp+4h] [ebp-4h]

  v2 = (char **)(this + 183);
  if ( this[183] )
    Precacher::PurgeSound2D(this + 183);
  v11 = 1;
  v12 = &v4;
  std::string::string(&v4, a2);
  result = Precacher::CacheSound2D(v4, v5, v6, v7, v8, v9, v10, (char *)v11);
  *v2 = result;
  return result;
}
