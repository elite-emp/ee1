CALCULATOR

<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    tools:context=".MainActivity">

    <Button
        android:id="@+id/button"
        android:layout_width="119dp"
        android:layout_height="68dp"
        android:onClick="add"
        android:text="Add"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.236"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.438" />

    <Button
        android:id="@+id/button2"
        android:layout_width="120dp"
        android:layout_height="71dp"
        android:onClick="sub"
        android:text="Sub"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.759"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.459" />

    <Button
        android:id="@+id/button3"
        android:layout_width="117dp"
        android:layout_height="69dp"
        android:onClick="mult"
        android:text="Mullt"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.234"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toBottomOf="@+id/button"
        app:layout_constraintVertical_bias="0.349" />

    <Button
        android:id="@+id/button4"
        android:layout_width="109dp"
        android:layout_height="71dp"
        android:onClick="div"
        android:text="Div"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.731"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toBottomOf="@+id/button2"
        app:layout_constraintVertical_bias="0.305" />

    <EditText
        android:id="@+id/editTextNumber3"
        android:layout_width="232dp"
        android:layout_height="84dp"
        android:layout_marginBottom="76dp"
        android:ems="10"
        android:hint="Result"
        android:inputType="number"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.497"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toBottomOf="@+id/editTextNumberSigned2"
        app:layout_constraintVertical_bias="1.0" />

    <EditText
        android:id="@+id/editTextNumberSigned"
        android:layout_width="268dp"
        android:layout_height="74dp"
        android:layout_marginBottom="20dp"
        android:ems="10"
        android:hint="enter first value"
        android:inputType="numberSigned"
        app:layout_constraintBottom_toTopOf="@+id/editTextNumberSigned2"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.412"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.681" />

    <EditText
        android:id="@+id/editTextNumberSigned2"
        android:layout_width="258dp"
        android:layout_height="79dp"
        android:ems="10"
        android:hint="enter second value"
        android:inputType="numberSigned"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.45"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.283" />
</androidx.constraintlayout.widget.ConstraintLayout>

------------------------------
//java code

package com.example.calculator;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.EditText;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }
    public void add (View v) {
        EditText et1 = (EditText) findViewById(R.id.editTextNumberSigned);
        EditText et2 = (EditText) findViewById(R.id.editTextNumberSigned2);
        EditText et3 = (EditText) findViewById(R.id.editTextNumber3);

        int n1 = Integer.parseInt(et1.getText().toString());
        int n2 = Integer.parseInt(et2.getText().toString());
        int res= n1+n2;
        et3.setText("Total value" +res);
    }

    public void sub (View v) {
        EditText et1 = (EditText) findViewById(R.id.editTextNumberSigned);
        EditText et2 = (EditText) findViewById(R.id.editTextNumberSigned2);
        EditText et3 = (EditText) findViewById(R.id.editTextNumber3);

        int n1 = Integer.parseInt(et1.getText().toString());
        int n2 = Integer.parseInt(et2.getText().toString());
        int res= n1-n2;
        et3.setText("Total value" +res);
    }

    public void mult (View v) {
        EditText et1 = (EditText) findViewById(R.id.editTextNumberSigned);
        EditText et2 = (EditText) findViewById(R.id.editTextNumberSigned2);
        EditText et3 = (EditText) findViewById(R.id.editTextNumber3);

        int n1 = Integer.parseInt(et1.getText().toString());
        int n2 = Integer.parseInt(et2.getText().toString());
        int res= n1*n2;
        et3.setText("Total value" +res);
    }

    public void div (View v) {
        EditText et1 = (EditText) findViewById(R.id.editTextNumberSigned);
        EditText et2 = (EditText) findViewById(R.id.editTextNumberSigned2);
        EditText et3 = (EditText) findViewById(R.id.editTextNumber3);

        int n1 = Integer.parseInt(et1.getText().toString());
        int n2 = Integer.parseInt(et2.getText().toString());
        int res= n1/n2;
        et3.setText("Total value" +res);
    }
}

