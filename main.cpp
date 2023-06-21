// main.cpp
#include <QApplication>
#include <QPushButton>
#include <QMessageBox>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Create the main window
    QWidget window;
    window.setWindowTitle("GUI Application");

    // Create a button
    QPushButton button("Click Me", &window);

    // Connect button's clicked signal to a slot
    QObject::connect(&button, &QPushButton::clicked, [&]() {
        QMessageBox::information(&window, "Message", "Button Clicked!");
    });

    // Set up the layout
    QVBoxLayout layout(&window);
    layout.addWidget(&button);

    // Set the layout on the window
    window.setLayout(&layout);

    // Show the window
    window.show();

    // Run the application event loop
    return app.exec();
}
