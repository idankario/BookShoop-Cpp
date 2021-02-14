#include "pch.h"

[STAThreadAttribute]
int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    BEBS::ShoppingMenu form;
    form.ShowDialog();

    return 0;
}
