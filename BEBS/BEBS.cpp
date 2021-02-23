#include "pch.h"

[STAThreadAttribute]
int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    BEBS::LogInMenu form;
    form.ShowDialog();

    return 0;
}
