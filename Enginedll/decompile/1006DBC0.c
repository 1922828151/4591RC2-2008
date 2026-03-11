/*
 * func-name: ??1REPage@@QAE@XZ
 * func-address: 0x1006dbc0
 * callers: 0x100cd620
 * callees: none
 */

void __thiscall REPage::~REPage(void **this)
{
  if ( this[128] )
  {
    free(this[128]);
    this[128] = 0;
  }
  this[129] = 0;
  this[130] = 0;
}
