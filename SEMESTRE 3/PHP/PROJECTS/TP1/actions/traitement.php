<?php

    $operateurs = ["77", "78", "75", "76", "70"];

    $prenomError = null;
    $nomError = null;
    $emailError = null;
    $numeroError = null;
    $objetError = null;
    $messageError = null;

    $success = null;

    if (isset($_POST['submit'])) {
        
        if (empty($_POST['prenom'])) {
            $prenomError = "Veuillez remplir ce champ";
        }
        if (empty($_POST['nom'])) {
            $nomError = "Veuillez remplir ce champ";
             
        }
        if (!filter_var($_POST['email'], FILTER_VALIDATE_EMAIL)) {
            $emailError = "Veuillez saisir un mail valide";
             
        }

        if (!in_array(substr($_POST['telephone'], 0, 2), $operateurs)) {
            $numeroError = "Veuillez saisir un numero telephone valide";
             
        }

        if (strlen($_POST['objet'] ) < 10) {
            $objetError = "Objet trop court";
             
        }

        if (strlen($_POST['message'] ) < 20) {
            $messageError = "message trop court";
             
        }

        if (!$prenomError && !$nomError && !$emailError && !$messageError && !$objetError) {
            $success = "Envoi du mail reussi";
            $_POST = [];
        }

    }